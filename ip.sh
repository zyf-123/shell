#/bin/bash
/bin/touch /home/ubuntu/shell_file/ip.txt
/usr/bin/last  `whoami` -n 2 | grep -v 'still' > /home/ubuntu/shell_file/ip.txt
grep -E -o "(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)"  /home/ubuntu/shell_file/ip.txt >  /home/ubuntu/shell_file/jieguo.txt
sh /home/ubuntu/shell脚本/ip_position.sh `cat /home/ubuntu/shell_file/jieguo.txt`

 ##access.log |sort|uniq -c| sort -n -r | head -n 2
