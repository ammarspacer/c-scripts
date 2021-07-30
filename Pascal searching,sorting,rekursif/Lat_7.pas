program insertion_sort;
var data : array [1..100] of integer;
a, x, i, j : integer;
ketemu : boolean;

begin
	write('Masukkan Jumlah Data Yang Di Input : ');readln(a);
	for i := 1 to a do begin
		write('Data ke',i,' : ');readln(data[i]);
	end;
	writeln ('Sebelum Di Urutkan : ');
	for i := 1 to a do write (data[i],' ');
	writeln('Insertion Sort');
	write ('Proses Pengurutan Insertion Sort : ');
	for i := 1 to a do begin
		x := data[i];
		j := i;
		ketemu := false;
		
	while not ketemu do begin
			if j <= 1 then
					ketemu := true
			else if x >= data[j-1] then
					ketemu := true
			else begin
					data[j] := data[j-1];
					j := j-1
			end
	end;
	data[j] := x;
	writeln;
	write ('hasil akhir Langkah ke - ',i,' : ');
	for j := 1 to a do write(data[j],' ');
end;

	writeln;writeln;
	write ('Hasil Pengurutan Insertion Sort : ');
	for i := 1 to a do write(data[i],' ');
	readln;
end.
