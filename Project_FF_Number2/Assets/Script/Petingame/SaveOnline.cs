using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveOnline : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //cloud save
        
        //save to local
        //load from cloud
        //load from local
        PlayerPrefs.SetInt("Day", 1);
        PlayerPrefs.SetInt("Food", 100);
        PlayerPrefs.SetInt("Energy", 100);
        PlayerPrefs.SetInt("Happy", 100);
        PlayerPrefs.Save();

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
