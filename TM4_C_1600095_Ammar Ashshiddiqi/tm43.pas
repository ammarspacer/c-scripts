program volume;
uses crt;
var
	p,l,t : integer;
	r : integer;
	vol : string;
	menu : byte;
	kembali : byte;

function volbal(p,l,t:integer) : integer;
	begin
		volbal := p*l*t;
	end;
function volker(r,t:integer) : integer;
	begin
		volker := (3,14*r*r*t)/3;
	end;
function volbol(r:integer) : integer;
	begin
		volbol := (4*3.14*r*r*r)/3;
	end;
	
begin
repeat;
clrscr;
		write('[Menu]');
		writeln('1. Volume balok');
		writeln('2. Volume kerucut');
		writeln('3. Volume bola');
		readln(menu);
		writeln;
		case menu of
		1: begin
			writeln('Masukkan panjang: '); readln(p);
			writeln('Masukkan lebar: '); readln(l);
			writeln('Masukkan tinggi: '); readln(t);
			writeln('Volume balok = ', volbal(p,l,t));
		   end;
		2: begin
			writeln('Masukkan jari-jari kerucut: '); readln(r);
			writeln('Masukkan tinggi: '); readln(t);
			writeln('Volume kerucut = ', volker(r,t));
		   end;
		3: begin
			writeln('Masukkan jari-jari bola: '); readln(r);
			writeln('Volume bola = ', volbol(r));
		   end;
		end;
end;
writeln('kembali ke menu?');
writeln('1. Ya');
writeln('2. tidak');
readln (kembali);
until (kembali=2);
end.