program bubble_sort;
var i,j,temp,n : integer;
a : array[1..100] of integer;
begin 
	write('Banyaknya elemen Array : ');readln(n);
	for i:=1 to n do begin write('elemen ke-',i,' '); 
	readln(a[i]);
end;
write('Sebelum diurutkan: ');
for i:=1 to n do write (a[i],' ');	
	for i:=1 to n-1 do begin
		for j:=n downto i+1 do begin
			if a[j-1]<a[j] then begin
				temp:=a[j-1];
				a[j-1]:=a[j];
				a[j]:=temp;
			end;
		end;
	end;
	writeln;
	write('hasil pengurutan bubble : ');
	for i:=1 to n do write (a[i],' ');
	readln;
end.