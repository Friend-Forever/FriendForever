using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ONOFF : MonoBehaviour
{
    public GameObject Cat;
    public GameObject Dog;

    void start()
    {
        Cat.SetActive(true);
        Dog.SetActive(true);
    }

    public void CatActive(int other)
    {
       Cat.SetActive(false);
       
    }
    public void DogActive(int other)
    {
       Dog.SetActive(false);
       
    }
    public void OpCatActive(int other)
    {
       Cat.SetActive(true);
       
    }
    public void OpDogActive(int other)
    {
       Dog.SetActive(true);
       
    }
}
