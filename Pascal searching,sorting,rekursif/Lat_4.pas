program search_string;
type cari_string = record
	menu:string;
	harga:longint;
end;
	var
		A:array [1..5] of cari_string;
		indeks,i,n:integer;
		menu:string;
begin
	write('Masukkan jumlah item yang dimasukkan: ');
	readln(n);
	
	for i:=1 to n do begin
		write('Menu makanan: ');
		readln(A[i].menu);
		write('Harga: ');
		readln(A[i].harga);
		writeln;
	end;
	
	writeln('| Menu makanan| harga |');
	for i:=1 to n do begin
		writeln(A[i].menu:10,A[i].harga:10);
	end;
	writeln;
	
	writeln('Pencarian berdasarkan menu makanan:');
	write('menu yang akan dicari: ');
	readln(menu);
	
	indeks:=0;
	for i:=1 to n do begin
		if (A[i].menu=menu) then
		indeks:=i;
	end;
	
	if (indeks=0) then 
		writeln('Data tidak ditemukan')
	else begin
		writeln;
		writeln('Detail:');
		writeln('Menu makanan: ',A[indeks].menu);
		writeln('Harga: ',A[indeks].harga);
	end;
	
readln;
end.