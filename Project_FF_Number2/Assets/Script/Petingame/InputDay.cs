using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class InputDay : MonoBehaviour
{

   
 
     public void AddStatus()
       {
         Daydown.instance.AddDay();
          
       }

       public void AddHunger() 
       {
         Daydown.instance.AddDay();
         Daydown.instance.AddFood();

       }
       public void Addenergy() 
       {
        Daydown.instance.AddDay();
        Daydown.instance.AddEnergy();

       }

       public void AddHappy() 
       {
        Daydown.instance.AddDay();
         Daydown.instance.AddHappinger();

       }
    







}
