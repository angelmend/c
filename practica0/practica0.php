<?php

    $var1 = 1; 
    
while ($var1<= 30){
    
     if ($var1%3 ==0 && $var1%5==0 )  {
                echo "Fizzbuzz\n";
              
    }
    else
        if ($var1%3 ==0 )  {
                echo "Fizz\n";
        }
        else
            if ($var1%5 ==0 )  {
                echo "Buzz\n";
            }
            else{
                echo $var1 ;
                echo "\n";
            }
    $var1++;
}

?>
