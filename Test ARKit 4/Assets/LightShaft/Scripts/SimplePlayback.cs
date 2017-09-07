﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using YoutubeLight;

public class SimplePlayback : MonoBehaviour {
	private System.Threading.Thread m_Thread = null;
	public string videoId = "bc0sJvtKrRM";
	private string videoUrl;
	private bool videoAreReadyToPlay = false;
	//use unity player(all platforms) or old method to play in mobile only if you want, or if your mobile dont support the new player.
	public bool useNewUnityPlayer;
	public VideoPlayer unityVideoPlayer;
	//start playing the video
	public bool playOnStart = false;

	public void Start(){
		if (playOnStart) {
			PlayYoutubeVideo (videoId);
		}
	}

	public void PlayYoutubeVideo(string _videoId)
	{
		videoId = _videoId;
		//Call the video system in another thread
		m_Thread = new System.Threading.Thread(GetTheVideo);
		m_Thread.Start();
	}


	//this will run only in another thread.
	void GetTheVideo()
	{
		List<VideoInfo> videoInfos = RequestResolver.GetDownloadUrls(videoId, false);
		foreach (VideoInfo info in videoInfos)
		{
			if (info.VideoType == VideoType.Mp4 && info.Resolution ==(360)) {
				if (info.RequiresDecryption) {
					//The string is the video url
					videoUrl = RequestResolver.DecryptDownloadUrl (info);
				} else {
					videoUrl = info.DownloadUrl;
				}
				videoAreReadyToPlay = true;
				break;
			}
		}
	}

	bool checkIfVideoArePrepared = false;
	void FixedUpdate(){
		//used this to play in main thread.
		if (videoAreReadyToPlay) {
			videoAreReadyToPlay = false;
			//play using the old method
			if (!useNewUnityPlayer)
				StartCoroutine (StartVideo ());
			else {
				Debug.Log ("Play!!" + videoUrl);
				unityVideoPlayer.source = VideoSource.Url;
				unityVideoPlayer.url = videoUrl;
				checkIfVideoArePrepared = true;
				unityVideoPlayer.Prepare ();
			}
		}

		if (checkIfVideoArePrepared) {
			checkIfVideoArePrepared = false;
			StartCoroutine (PreparingAudio ());
		}
	}


	IEnumerator PreparingAudio(){
		//Wait until video is prepared
		WaitForSeconds waitTime = new WaitForSeconds(1);
		while (!unityVideoPlayer.isPrepared)
		{
			Debug.Log("Preparing Video");
			//Prepare/Wait for 5 sceonds only
			yield return waitTime;
			//Break out of the while loop after 5 seconds wait
			break;
		}

		Debug.Log("Done Preparing Video");

		//Play Video
		unityVideoPlayer.Play();

		//Play Sound
		unityVideoPlayer.Play();

		Debug.Log("Playing Video");
		while (unityVideoPlayer.isPlaying)
		{
			yield return null;
		}
		OnVideoFinished ();
	}

	public void Play(){
		unityVideoPlayer.Play();
	}



	IEnumerator StartVideo(){
		#if UNITY_IPHONE || UNITY_ANDROID
		Handheld.PlayFullScreenMovie (videoUrl);
		#endif
		yield return new WaitForSeconds (1.4f);
		OnVideoFinished ();
	}

	public void OnVideoFinished(){
		Debug.Log ("Video finished");
	}


}
