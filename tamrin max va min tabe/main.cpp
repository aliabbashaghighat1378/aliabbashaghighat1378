#include <iostream>

using namespace std;
float maxest(float,float ,float ,float ,float ,float ,float ,float ,float ,float );
float minimumest(float ,float ,float ,float ,float ,float ,float ,float ,float,float );
float secondmax(float ,float ,float ,float ,float ,float ,float ,float ,float ,float );
 float secondmin(float ,float ,float ,float ,float ,float ,float ,float ,float ,float );
int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l,m;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    cout<<maxest(a,b,c,d,e,f,g,h,i,j)<<endl;
    cout<<minimumest(a,b,c,d,e,f,g,h,i,j)<<endl;
    cout<<secondmax(a,b,c,d,e,f,g,h,i,j)<<endl;
    cout<<secondmin(a,b,c,d,e,f,g,h,i,j);
}
    float maxest(float num1,float num2,float num3,float num4,float num5,float num6,float num7,float num8,float num9,float num10){
    float max;
    max=num1;
    if(num2>max)
        max=num2;
    if(num3>max)
        max=num3;
    if(num4>max)
        max=num4;
    if(num5>max)
        max=num5;
    if(num6>max)
        max=num6;
    if(num7>max)
        max=num7;
    if(num8>max)
        max=num8;
    if(num9>max)
        max=num9;
    if(num10>max)
        max=num10;
    return max;
}
    float minimumest(float a,float b,float c,float d,float e,float f,float g,float h,float i,float j)
    {
        float min;
        min=a;
        if(b<min)
            min=b;
        if(c<min)
            min=c;
        if(d<min)
            min=d;
            if(e<min)
                min=e;
            if(f<min)
                min=f;
            if(g<min)
                min=g;
            if(h<min)
                min=h;
            if(i<min)
                min=i;
                if(j<min)
                    min=j;
            return min;

    }
    float secondmax(float a,float b,float c,float d,float e,float f,float g,float h,float i,float j)
    {
        float max2;
        float max;
      // max= maxest(a,b,c,d,e,f,g,h,i,j);
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
    if(f>max)
        max=f;
    if(g>max)
        max=g;
    if(h>max)
        max=h;
    if(i>max)
        max=i;
    if(j>max)
        max=j;

      /*  float a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
        if(a<max)
            a1=a;
            else a1=0;
            if(b<max)
                a2=b;
                else a2=0;
            if(c<max)
                a3=c;
                else a3=0;
            if(d<max)
                a4=d;
                else a4=0;
            if(e<max)
                a5=e;
                else a5=0;
                if(f<max)
                    a6=f;
                    else a6=0;
                if(g<max)
                    a7=g;
                    else a7=0;
                if(h<max)
                    a8=h;
                    else a8=0;
                if(i<max)
                    a9=i;
                    else a9=0;
                if(j<max)
                    a10=j;
                    else a10=0;*/
                        if(a>max2&&a<max)
                        max2=a;
                    if(b>max2&&b<max)
                        max2=b;
                    if(c>max2&&c<max)
                        max2=c;
                    if(d>max2&&d<max)
                        max2=d;
                    if(e>max2&&e<max)
                        max2=e;
                    if(f>max2&&f<max)
                        max2=f;
                    if(g>max2&&g<max)
                        max2=g;
                    if(h>max2&&h<max)
                        max2=h;
                    if(i>max2&&i<max)
                        max2=i;
                    if(j>max2&&j<max)
                        max2=j;
           /* a1=max2;
            if(a2>max2)
                max2=a2;
            if(a3>max2)
                max2=a3;
            if(a4>max2)
                max2=a4;
            if(a5>max2)
                max2=a5;
            if(a6>max2)
                max2=a6;
            if(a7>max2)
                max2=a7;
            if(a8>max2)
                max2=a8;
            if(a9>max2)
                max2=a9;
            if(a10>max2)
                max2=a10;*/
            return max2;
                }
                float secondmin(float a,float b,float c,float d,float e,float f,float g,float h,float i,float j){
                float min2=10000;
                float min;
                  min=a;
        if(b<min)
            min=b;
        if(c<min)
            min=c;
        if(d<min)
            min=d;
            if(e<min)
                min=e;
            if(f<min)
                min=f;
            if(g<min)
                min=g;
            if(h<min)
                min=h;
            if(i<min)
                min=i;
                if(j<min)
                    min=j;
                  /*float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
                  if(a1>min)
                    a1=a;
                  else a1=1000;
                    if(a2>min)
                    a2=b;
                  else a2=1000;
                  if(a3>min)
                  a3=c;
                  else a3=1000;
                  if(a4>min)
                    a4=d;
                  else a4=1000;
                  if(a5>min)
                    a5=e;
                  else a5=1000;
                  if(a6>min)
                    a6=f;
                  else a6=1000;
                  if(a7>min)
                    a7=g;
                  else a7=1000;
                  if(a8>min)
                    a8=h;
                  else a8=1000;
                  if(a9>min)
                    a9=i;
                  else a9=1000;
                  if(a10>min)
                    a10=j;
                  else a10=1000;*/

                    if(a<min2&&a>min)
                    min2=a;
                  if(b<min2&&b>min)
                    min2=b;
                  if(c<min2&&c>min)
                    min2=c;
                  if(d<min2&d>min)
                    min2=d;
                  if(e<min2&&e>min)
                    min2=e;
                  if(f<min2&&f>min)
                    min2=f;
                  if(g<min2&&g>min)
                    min2=g;
                  if(h<min2&&h>min)
                    min2=h;
                  if(j<min2&&j>min)
                    min2=j;
                  if(i<min2&&i>min)
                    min2=i;
              /*        min2=a1;
            if(a2<min2)
                min2=a2;
            if(a3<min2)
                min2=a3;
            if(a4<min2)
                min2=a4;
            if(a5<min2)
                min2=a5;
            if(a6<min2)
            min2=a6;
            if(a7<min2)
                min2=a7;
            if(a8<min2)
                min2=a8;
            if(a9<min2)
                min2=a9;
            if(a10<min2)
                min2=a10;*/
            return min2;


                }

