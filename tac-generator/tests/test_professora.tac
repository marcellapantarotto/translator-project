.table
int v0[] = {0}
float v1[] = {0}
int v4
float t0
int v5[] = {0}
int t1
int v6
char s0[] = "Digite o elemento da lista: "
int t2
char s1[] = "Digite os número de elementos da lista: "
int #0
int v12
float v13[] = {0}
float v14[] = {0}
int #0
int v12
int v15
int t3
char s2[] = " "
char s3[] = " "
char s4[] = "A nova lista tem "
char s5[] = " elementos."
char s6[] = "A nova lista não possui elementos."

.code
read_list: 
minus t0, 435.7
mov v4, t0
mov v4, t0
mov v5, t0
mov v4, 0
add t1, v4, 1
mov v4, t1
mov v4, t1
mov v4, t1
println s0
scani v6
mov v5, t1
mov v5, t1
mov v5, t1
return v5 

succ: 
add t2, #0, 1
return  

leq_10: 
return  

main: 
println s1
scani #0
param #0
call read_list, 1
mov v0, v2
mov v0, t2
mov v1, t2
mov v1, t2
mov v1, t2
mov v13, t2
mov v13, t2
mov v13, t2
mov #0, 0
mov v14, v13
not v14, v14
mov v14, t2
mov v14, t2
add t3, #0, 1
mov #0, t3
mov #0, t3
mov #0, t3
print ?
print s2
println s3
print s4
print #0
println s5
println s6
return 0 
