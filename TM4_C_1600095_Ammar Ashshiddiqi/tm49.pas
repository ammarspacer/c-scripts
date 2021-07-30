program ppdb;
type data=record
	nama : string;
	ttl : string;
	klamin : string;
	agama : string;
	goldar : string;
end;
var
	siswa : array [1..100] of data;
	n : integer;
	i : integer;
 begin
	write('Masukkan jumlah pendaftar (maksimal 100): ');readln(n);
	for i:=1 to n do
	begin
		write('Nama : '); readln(siswa[n].nama);
		write('Tempat, tanggal lahir : ');readln(siswa[n].ttl);
		write('Jenis kelamin: ');readln(siswa[n].klamin);
		write('Agama: ');readln(siswa[n].agama);
		write('Golongan darah : ');readln(siswa[n].goldar);
	end;
	
	if siswa[n].klamin := 'Perempuan' do
		for i:=1 to n do
			begin
				write('Nama : '); write(siswa[n].nama);
				write('Tempat, tanggal lahir : ');write(siswa[n].ttl);
				write('Jenis kelamin: ');write(siswa[n].klamin);
				write('Agama: ');write(siswa[n].agama);
				write('Golongan darah : ');write(siswa[n].goldar);
			end;
			