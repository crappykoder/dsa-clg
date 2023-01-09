void main()
{
    int i,n,r,s=0;
    clrscr();
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO FIND REVERSE OF A NUMBER
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
     
    /* CHECKING IF THE NUMBER ENTERED AND THE REVERSE NUMBER IS EQUAL OR NOT */
    if(s==n)
    {
        printf("\n %d is a Palindrome Number",n);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",n);
    }
    getch();
}