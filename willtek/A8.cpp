int f1(int num)
{ 
	if(num % 3 == 0 || num % 5 == 0) return 1;
	else return 0;

}

void main(void)
{
    int num;
    scanf("%d", &num);
    printf("%s", (f1(num) ? "YES" : "NO"));
}
