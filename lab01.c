#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void removewhitespace(char* s){
	if(s==NULL){
		return;}
	int len = strlen(s), i = 0, j = 0, numspaces = 0;
	while(i<len-1){
		if(isspace(s[i])){
			j = i +1;
			while(j<len -numspaces){
				s[j-1] = s[j]; j++;}
			s[j-1] = '\0'; numspaces++; continue;}
		i++;}}

char * c2pascal(char *s){
	if(s == NULL || strlen(s) > 255){
		return NULL;}
	char *pString = malloc(sizeof(char)*(strlen(s)+1));
	int i = 0; pString[0] = strlen(s);
	for(; i<strlen(s); i++){
		pString[i+1] = s[i];}
	return pString;}

char *pascal2c(char *s){
	if(s==NULL){
		return NULL;}
	char *cstring = malloc(sizeof(char)*(s[0]+1));
	int i = 0;
	for(; i<s[0]; i++){
		cstring[i] = s[i+1];}
	cstring[i] = '\0';
	return cstring;}

char **tokenify(char *s){
	if(s==NULL){
		return NULL;}
	char* string = strdup(s), token = "", temp;
	int i = 0, numspaces = 0;
	char **tokstrings;
	for(;i<strlen(string);i++){
		if(issapce(s[i])){
			numspace++;}}
	if(numspaces==0){
		tokstrings = malloc(sizeof(char)*2);
		tokstrings[0] = string; tokstrings[1] = NULL;
		return tokstrings;}
	tokstrings = malloc(sizeof(char)*(numspaces +1;));
	tokstrings[0] = strtok(s, " \n\t\r");
	i = 1;
	while(token!=NULL){
		tokstrings[i] = strtok(s, " \n\t\r");
		token = tokstrings[i]; i++;}
	return tokstrings;}
