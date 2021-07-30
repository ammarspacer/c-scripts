program search_char;
uses crt;
	var
		s : string;
		len,i : integer;
		cari : char;
		jml : integer;
		x, pos : string;
begin
	write('Masukka kata : ');
	readln(s);
	
	len := Length(s);
	
	writeln('Kata yang dimasukkan adalah : ');
	for i := 1 to len do
		write(s[i], ', ');
		writeln();
		readln();
		
	write('Masukkan Huruf yang di cari : ');
	readln(cari);
	
	writeln('Huruf yang di cari "',cari,'"');
	readln();
	
	jml := 0;
	for i := 1 to len do begin 
		if (s[i] = cari) then begin
			str(i,x);
			pos := pos + x + ', ';
			jml := jml + 1;
		end;
	end;
	
	if (jml > 0) then
		writeln('Huruf ',cari, ' ditemukan sebanyak : ', jml, ' kali pada posisi : ', pos)
	else
		writeln('Huruf ',cari, ' tidak ditemukan!');
	readln;
end.