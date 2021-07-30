program binary_search;

procedure binary_search;
	var
		A: array[1..10] of integer;
		cari,i,j,k: integer;
		ketemu: boolean;
begin
	write('Angka yang dicari: ');
	readln(cari);
		A[1]:=1; A[2]:=3; A[3]:=6; A[4]:=8; A[5]:=9;
		A[6]:=10; A[7]:=15; A[8]:=12; A[9]:=14; A[10]:=13;
	ketemu:=FALSE;
		i:=1;
		j:=10;
	while (i<=j) and (not ketemu) do begin
		k:=(i+j) div 2;
		if (A[k]=cari) then
			ketemu:=TRUE
		else if (A[k]>cari) then
			j:=k-1
		else
			i:=k+1;
	end;
	if ketemu then
		writeln('Ditemukan!')
	else
		writeln('Tidak Ditemukan');
	 readln;
end;

begin
	binary_search;
	readln;
end.

