.table
int v3
int t0
int v7
int t1
int t2
int v11
int v12
int v13
int v14
int v15
int t3

.code
add_func: 
print #1
print ' '
print '+'
print ' '
print #0
print ' '
print '='
print ' '
add t0, #1, #0
mov v3, t0
println v3
return v3 

sub_func: 
print #1
print ' '
print '-'
print ' '
print #0
print ' '
print '='
print ' '
sub t1, #1, #0
mov v7, t1
println v7
return v7 

minus_func: 
print '-'
print '1'
print ' '
print '*'
print ' '
print #0
minus t2, #0
mov #0, t2
print ' '
print '='
print ' '
println #0
return #0 

main: 
print 'I'
print 'n'
print 'p'
print 'u'
print 't'
print ' '
print 'a'
print ' '
print 'i'
print 'n'
print 't'
print 'e'
print 'g'
print 'e'
print 'r'
print ' '
print 'n'
print 'u'
print 'm'
print 'b'
print 'e'
print 'r'
print ' '
print '('
print 'x'
print ')'
print ':'
print ' '
scani v11
param v11
call minus_func, 1
pop $0
mov v13, $0
print 'T'
print 'h'
print 'e'
print ' '
print 'n'
print 'e'
print 'g'
print 'a'
print 't'
print 'i'
print 'v'
print 'e'
print ' '
print '('
print '-'
print 'x'
print ')'
print ' '
print '='
print ' '
println v13
print 'I'
print 'n'
print 'p'
print 'u'
print 't'
print ' '
print 'a'
print 'n'
print 'o'
print 't'
print 'h'
print 'e'
print 'r'
print ' '
print 'i'
print 'n'
print 't'
print 'e'
print 'g'
print 'e'
print 'r'
print ' '
print 'n'
print 'u'
print 'm'
print 'b'
print 'e'
print 'r'
print ' '
print '('
print 'y'
print ')'
print ':'
print ' '
scani v12
param v12
param v11
call add_func, 2
pop $0
mov v14, $0
print 'T'
print 'h'
print 'e'
print ' '
print 'a'
print 'd'
print 'd'
print 'i'
print 't'
print 'i'
print 'o'
print 'n'
print ' '
print 'i'
print 's'
print ' '
print '('
print 'x'
print '+'
print 'y'
print ')'
print ' '
print '='
print ' '
println v14
param v12
param v13
call sub_func, 2
pop $0
mov v15, $0
print 'T'
print 'h'
print 'e'
print ' '
print 's'
print 'u'
print 'b'
print 't'
print 'r'
print 'a'
print 'c'
print 't'
print 'i'
print 'o'
print 'n'
print ' '
print 'i'
print 's'
print ' '
print '('
print 'x'
print '-'
print 'y'
print ')'
print ' '
print '='
print ' '
println v15
print 'T'
print 'h'
print 'e'
print ' '
print 'o'
print 'p'
print 'e'
print 'r'
print 'a'
print 't'
print 'i'
print 'o'
print 'n'
print ' '
print 'i'
print 's'
print ' '
print '('
print 'x'
print '-'
print '('
print '-'
print 'x'
print ')'
print ')'
print ' '
print '='
print ' '
sub t3, v11, v13
mov v11, t3
println v11
