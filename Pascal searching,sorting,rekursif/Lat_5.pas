program min_max;
var a 	: array[1..100] of real;
i,n		: integer;
max,min : real;
begin
write('masukkan banyaknya data: ');
readln(n);
max:=-9999999999999999999999999;
min:=9999999999999999999999999;
	for i:=1 to n do begin
	write('data ke-',i,': '); readln (a[i]);
		if max<(a[i]) then max := (a[i]);
		if min>(a[i]) then min := (a[i]);
	end;
writeln('nilai maksimum		: ', max:6:0);
writeln('nilai minimum		: ', min:6:0);
readln;
end.