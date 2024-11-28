#include<stdio.h>
#include<math.h>

int main()
{
    int b;
float V,U,T,A,S,v,u,a,t,s;

printf("This is an solver of newtons equation of motion which helps students to cross verify their soln\n \n");
printf("SELECT NEWTONS EQN OF MOTION:\n 1.V=U+A*T\n 2.S=UT+1/2(A*T*T)\n 3.V*V=U*U+2AS \n \n");
scanf("%d",&b);

switch(b)
{
    case 1:
        printf("\nYou have selected eqn v=u+at\nTo find the value of the variable enter its value as 00");
        printf("\nEnter the value of V=");
        scanf("%f",&V);
        printf("\nEnter the value of U=");
        scanf("%f",&U);
        printf("\nEnter the value of A=");
        scanf("%f",&A);
        printf("\nEnter the value of T=");
        scanf("%f",&T);

        if(V==00)
        { v=U+(A*T);
            printf("\nvalue of V= %f",v);
            }
        if(U==00)
        { u=V-(A*T);
            printf("\nvalue of U= %f",u);
        }
        if(A==00)
        { a=(V-U)/T;
            printf("\nvalue of A= %f",a);
        }
        if(T==00)
        { t=(V-U)/A;
            printf("\nvalue of T= %f",t);}

        break;



    case 2:
        {        printf("\nYou have selected eqn S=UT+1/2(A*T*T)\nTo find the value of the variable enter its value as 00");
        printf("\nEnter the value of S=");
        scanf("%f",&S);
        printf("\nEnter the value of U=");
        scanf("%f",&U);
        printf("\nEnter the value of A=");
        scanf("%f",&A);
        printf("\nEnter the value of T=");
        scanf("%f",&T);

        if(S==00)
        { s=(U*T)+(0.5*(A*T*T));
            printf("\nvalue of S= %f",s);
            }
        if(U==00)
        { u=S-((0.5)*(A*T*T))/T;
        printf("\nvalue of U= %f",u);
        }
        if(T==00)
        { t=(U*U-(sqrt(4*0.5*A*S)))/A;
            printf("\nvalue of T= %f",t);
        }
        if(A==00)
        { a=2*(S-U*T)/(T*T);
            printf("\nvalue of T= %f",a);
        break;

        }

    case 3:
        printf("\nYou have selected eqn V*V=U*U+2AS\nTo find the value of the variable enter its value as 00");
        printf("\nEnter the value of S=");
        scanf("%f",&S);
        printf("\nEnter the value of U=");
        scanf("%f",&U);
        printf("\nEnter the value of A=");
        scanf("%f",&A);
        printf("\nEnter the value of V=");
        scanf("%f",&V);

        if(S==00)
        { s=(V*V-U*U)/(2*A);
            printf("\nvalue of S= %f",s);
            }
        if(U==00)
        { u=sqrt(V*V-2*A*S);
        printf("\nvalue of U= %f",u);
        }
        if(V==00)
        { v=U*U+(2*A*S);
            printf("\nvalue of V= %f",v);
        }
        if(A==00)
        { a=(V*V-U*U)/(2*S);
            printf("\nvalue of a= %f",a);}
        break;


        }
}
return 0;}

