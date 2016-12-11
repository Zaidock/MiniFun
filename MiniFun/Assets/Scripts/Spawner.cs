using UnityEngine;
using System.Collections;

public class Spawner : MonoBehaviour {

	public Transform[] spawnLocation;
	public GameObject[] whatToSpawnPrefab;
	public GameObject[] whatToSpawnClone;

	void Start(){
		spawnStack ();
	}

	public void spawnStack(){
		whatToSpawnClone[0] = Instantiate (whatToSpawnPrefab[0], spawnLocation[0].transform.position, Quaternion.Euler (0,0,0)) as GameObject;
	}
}
