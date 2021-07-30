program konversi_suhu;
var celsi, ream, fare, kel : string;
    procedure reamur;
    begin
       ream := 4/5 * celsi;
       writeln ('Suhu dalam Reamur adalah : ', ream:6:2);
    end;
    procedure farenheit;
    begin
        fare := (9/5 * celsi) + 32;
        writeln ('Suhu dalam Farenheit adalah : ', fare:6:2);
    end;
    procedure kelvin;
    begin
        kel := celsi + 273;
        writeln ('Suhu dalam Kelvin adalah : ', kel:6:2);
    end;

begin
     write ('Masukkan Suhu dalam Celcius = ');
     readln (celsi);
     reamur;
     farenheit;
     readln;
end.