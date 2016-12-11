using UnityEngine;
using System.Collections;

public class GameTower : MonoBehaviour {

	public bool hasStarted = false;
	public Stack stack;

	// Use this for initialization
	void Start () {
	
	}

	
	// Update is called once per frame
	void Update () {
		if(!hasStarted){
			if(Input.GetMouseButtonDown (0)){
				hasStarted = true;
				stack.hasStarted = true;
				print ("has Started"); 
			}
		}
	}
}
