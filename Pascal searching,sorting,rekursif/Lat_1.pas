program sequential_input;
	var 
		angka: array[1..10] of integer;
		cari,i,n: integer;
begin
	write('Banyak inputan: ');
	readln(n);
	
	for i:=1 to n do begin
		write('angka ke-',i,' : ');
		readln(angka[i]);
	end;
	
	for i:=1 to n do
		write(angka[i],' ');
		
	write('Angka yang dicari: ');
	readln(cari); i:=1;
	
	while (i<n) and (angka[i] <> cari) do begin
		i:=i+1;
	end;
	
	if(angka[i]=cari) then 
		writeln('Ditemukan pada elemen larik ke-',i)
	else
		writeln('Data Tidak Ditemukan!');
	readln;
end.
		