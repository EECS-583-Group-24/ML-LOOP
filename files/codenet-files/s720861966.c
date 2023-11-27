int main()
{


    int a, b, c, d,  i,n;

    scanf("%d%d", &a ,&b);

    if(a>=b)
        c=a;
    else
        c=b;


    for(i=1;i<=c;i++)
    {

     if(a%i==0 && b%i==0)
     {
        d=i;
     }


    }

    printf("%d\n", d);


        return 0;

}

