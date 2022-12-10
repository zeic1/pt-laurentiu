#define volan A0
int citireVolan = 0;
int A=1694, E1=1350, 1438;

double pi=3.1415926;
double m1=183.1, m2=268, g=9.80665;
double delta, log1, log2, la=979.67,G1,G2,Ga,lb=669.33,Fz1,Fz2,Fy1=1963.34,Fy2=1944.6,Cy1,Cy2,k,zeta,R,Yaw,Vstanga,Vdreapta,nstanga,ndreapta,nmotstg,nmotdr;
double Rt=4.23, rd=0.255, m=451.1, nw,V;

void setup() 
{
   
}


void loop() {
 
  // put your main code here, to run repeatedly:
 
  if(citireVolan >= 500) // volanul este virat la stanga
  {
    citireVolan = citireVolan*0.078;
    citireVolan = citireVolan - 39;  // 0 daca citireVolan = 500, 39 daca citireVolan = 1000

   if(citireVolan > 3)
    {
      // citeste unghiul de virare la stanga
    }
    
  }
  else if(citireVolan < 500) // volanul este virat la dreapta
  {
    citireVolan = citireVolan*(-0.078);
    citireVolan = citireVolan + 39;  // 0 daca citireVolan aprox= 499/500, -39 daca citireVolan = 0

   if(citireVolan > 3)
    {
      // citeste unghiul de virare la dreapta
    }
    
  }
  else
  {
    // volan drept
  }
  nw=n/5;
    V=(2*pi*rd*nw)/2
    G1=m1*g;
    G2=m2*g;
    Ga=G1+G2;
    Fz1=G1/2;
    Fz2=G2/2;
    log1=log(Fz1);
    log2=log(Fz2);
    Cy1=66.943 * log1 - 29.418;
    Cy2=66943 * log2 - 29.418;
    k=(lb*m)/(Cy1*(la+lb)) -  (la*m)/(Cy2*(la+lb));
    zeta=(pi/180)*delta;              //delta citit de la volan
    R = ((la+lb)+K*V^2)/zeta;
    Yaw = V/(R/1000);
    Vstanga = Yaw*(R-E2/2);                     
    Vdreapta = Yaw*(R+E2/2);
    nstanga= Vstanga*60/(2*pi*rd*1000);
    ndreapta= Vdreapta*60/(2*pi*rd*1000);
    nmotstg = nstanga*5;
    nmotdr = ndreapta*5;
    double x=map(n,0,7000,0,255); //x mapat folosit pentru
      
    
}
