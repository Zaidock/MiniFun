using UnityEngine;
using System.Collections;

public class Stack : MonoBehaviour {

	private Rigidbody2D rigi;
	private bool down = false;
	private bool addedNew = false;
	public bool hasStarted = false;
	public GameObject stack;
	private Vector3 startingPos = new Vector3(-3f, 3f, 0f);
	private Vector3 newPos = new Vector3(-6f, 3f, 0f);
	void Awake(){
		rigi = GetComponent<Rigidbody2D>();
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update (){
		if (hasStarted) {
			bool scrollStarted = false;
			if(!scrollStarted){
				Scroll ();
				scrollStarted = true;
			}
			if (Input.GetMouseButtonDown (0) && !down) {
				if (!addedNew) {
					Instantiate (stack, startingPos, transform.rotation);
					addedNew = true;
				}
				Rigidbody2D gameObjectsRigidBody = gameObject.AddComponent<Rigidbody2D> (); // Add the rigidbody.
				down = true;

			}
		}
	}

	public void Scroll ()
	{
		if (!down)
			transform.Translate (2 * Time.deltaTime, 0, 0);
		else if (down) {
			transform.Translate (0, 0, 0, 0);
		}

	}


}
