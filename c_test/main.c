//
//  main.c
//  c_test
//
//  Created by xiuyun peng on 08/12/2019.
//  Copyright © 2019 C语言中文网. All rights reserved.
//

#include<stdio.h>
int main(){
    int i,j,a[4]={1,5,9,10},temp;
    float OWA,g1=0.1,g2=0.2,g3=0.3,g4=0.4;
    for( i=0;i<4;i++)
        {
            for ( j=i+1; j<4;j++)
            {
                if (a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
           
        
    }
    OWA=g1*a[0]+g2*a[1]+g3*a[2]+g4*a[3];
   // for(i=0;i<4;i++){
                   //printf("%d",a[i]);
              // }
    printf("%f\n",OWA);
          
}
