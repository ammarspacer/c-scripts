program pertambahan_2_pecahan;

type data=record
	pembilang : real;
	penyebut : real;
end;
var
	p1 : data;
	p2 : data;
	p3 : data;
function p3.penyebut(p1.penyebut,p2.penyebut : data ) : data;
	begin
		p3.penyebut := p1.penyebut * p2.penyebut;
	end;
function p3.pembilang(p1.penyebut,p1.pembilang,p2.penyebut,p2.pembilang,p3.penyebut:data):data;
	begin
		p3.pembilang := ((p3.penyebut / p1.penyebut) * p1.pembilang) + ((p3.penyebut / p2.penyebut) * p2.pembilang);
	end;
begin
	writeln('Pecahan ke 1');
	writeln('Masukkan angka pembilang ke 1 : '); readln(p1.pembilang);
	writeln('Masukkan angka penyebut ke 1 : '); readln(p1.penyebut);
	
	write('Pecahan ke 2');
	writeln('Masukkan angka pembilang ke 2 : '); readln(p2.pembilang);
	writeln('Masukkan angka penyebut ke 2 : '); readln(p2.penyebut);
	
	writeln('Maka hasil dari pertambahan ',p1.pembilang,'/',p1.penyebut,' + ',p2.pembilang,'/',p2.penyebut,' adalah ',p3.pembilang(p1.penyebut,p1.pembilang,p2.penyebut,p2.pembilang,p3.penyebut),'/',p3.penyebut(p1.penyebut,p2.penyebut));
	
end.	