
read_func: 
scani #2
println #1
println #0
return #2 

read_func2: 
println #2
println #1
println #0
return #2 

main: 
mov v9, 2
param v9
mov $0, 1
param $0
mov $1, 4
param $1
call read_func, 3
param v9
mov $2, 1
param $2
mov $3, 4
param $3
call read_func2, 3
return 0 
