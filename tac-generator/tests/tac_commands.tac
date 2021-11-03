
read_func: 
add t0, v1, v2
println 
return v1 

main: 
minus t1, 2
mov v5, t1
param v5
param #0
param #1
call read_func, 3
return 0 
