echo "starting two threads"
nice -n 10 dd if=/dev/zero of=/dev/null 2>30.out &
dd if=/dev/zero of=/dev/null 2>20.out &
sleep 3600