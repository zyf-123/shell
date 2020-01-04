#!/bin/bash
#这是整理服务器信息的shell脚本
/bin/date +"%Y年%M月%d日%H点%M分钟" > /home/ubuntu/xinxi.txt
echo "这是硬盘分区情况" >> /home/ubuntu/xinxi.txt
/bin/df -h >> /home/ubuntu/xinxi.txt
/bin/cat /home/ubuntu/xinxi.txt
#end 
