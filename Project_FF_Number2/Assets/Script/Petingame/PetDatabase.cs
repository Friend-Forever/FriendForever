using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetDatabase : MonoBehaviour
{
    //Pet Database
    public List<Pet> petList = new List<Pet>();
    public int PetCount { get { return petList.Count; } }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public Pet GetPet(int index)
    {
        return petList[index];
    }

}
