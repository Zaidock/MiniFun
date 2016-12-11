using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SceneHandler : MonoBehaviour {

	public void loadScene(string name){
		SceneManager.LoadScene (name);
	}

}
