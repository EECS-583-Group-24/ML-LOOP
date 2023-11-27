char s[99];c,i,j=80;
main(){
	for(i=strlen(gets(s));i--;)s[i]-66?!c?s[--j]=s[i]:c--:c++;
	puts(s+j);
}