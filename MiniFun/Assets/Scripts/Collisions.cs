using UnityEngine;
using System.Collections;

public class Collisions : MonoBehaviour {
	void OnTriggerEnter2D(Collider2D other) {
		print ("You lose");
    }
}
