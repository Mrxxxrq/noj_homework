#include<stdio.h>
#include<math.h>
const double pi = acos(-1);
const double t = pi /180.0;

double hav (double theta)
{
    double h = (1.0-cos(theta))/2.0;
    return h;
}


int main()
{
   double lat1,lat2,lon1,lon2;
   double d;
   const double r = 6371.0;
   scanf("%lf %lf",&lat1,&lon1);
   scanf("%lf %lf",&lat2,&lon2);

   lat1 *= t;
   lat2 *= t;
   lon1 *= t;
   lon2 *= t;

   double hav_lat = hav(lat1 - lat2);//方便计算
   double hav_lon = hav(lon1 - lon2);
   
   d = r * acos(1 - 2*(hav_lat + cos(lat1)*cos(lat2)*hav_lon));
   printf("%.4lfkm",d);
   return 0;
}

