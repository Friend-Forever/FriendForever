using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatusHunger : MonoBehaviour
{
   public int food, happy, energys = 100;
    public int day = 0;

    private void Start()
    {
        InvokeRepeating("LowerHealth", 1.0f, 5.0f);
    }

    public void Update()
    {

    }
    public void LowerHealth()
    {
        day++;
        food -= 5;
        happy -= 5;
        energys -= 5;
    }
   
}  
   
    

