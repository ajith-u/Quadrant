x=gets.to_i;
if(x.between?(-1000,1000) and x!=0)
  y=gets.to_i;
  if(y.between?(-1000,1000) and y!=0)
    if(0<x and 0<y)
      puts 1
    elsif(x<0 and 0<y)
      puts 2
    elsif(x<0 and y<0)
      puts 3
    else
      puts 4
    end
  end
end