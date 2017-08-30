using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieControl : MonoBehaviour {
	Vector3 m_OriginalPos;
	private Animation animation;
	private bool shouldMove = false;
	private bool shouldUpdate = false;
	// Use this for initialization
	void Start () {
		animation = GetComponent<Animation>();	
	}
	
	// Update is called once per frame
	void Update () {
		// if (shouldMove) {
		// 	transform.Translate(Vector3.forward * Time.deltaTime * 10 * (transform.localScale.x * .05f));
		// }


		if (shouldUpdate) {
			transform.position = m_OriginalPos;
			shouldUpdate = false;
		}
	}

	public void Walk() {
		// if (!animation.isPlaying) {
		// 	animation.Play();
		// } else {
		// 	animation.Stop();
		// }
	}

	public void LookAt() {
		// transform.LookAt(Camera.main.transform.position);
		// transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
	}

	public void Bigger() {
		transform.localScale += new Vector3(1, 1, 1);
	}

	public void Smaller() {
		if (transform.localScale.x > 1)
			transform.localScale -= new Vector3(1, 1, 1);
	}

	public void Up() {
		shouldUpdate = true;
		m_OriginalPos = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
	}

	public void Down() {
		shouldUpdate = true;
		m_OriginalPos = new Vector3(transform.position.x, transform.position.y - 1, transform.position.z);
	}

	public void Forward() {
		shouldUpdate = true;
		m_OriginalPos = new Vector3(transform.position.x, transform.position.y, transform.position.z + 1);
	}

	public void Backward() {
		shouldUpdate = true;
		m_OriginalPos = new Vector3(transform.position.x, transform.position.y, transform.position.z - 1);
	}

	public void ZoomIn() {

	}

	public void ZoomOut() {

	}
}
