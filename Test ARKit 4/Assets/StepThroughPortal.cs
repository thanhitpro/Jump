using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepThroughPortal : MonoBehaviour {
	public GameObject otherPortal;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void onTriggerEnter(Collider other) {
		if (other.tag == "zombie") {
			other.transform.position = otherPortal.transform.position;
		}
	}
}
