webbench=./webbench
#服务器地址
server_ip=175.27.189.42
server_port=9006
url=http://${server_ip}:${server_port}/echo
#⼦进程数量
process_num=2
#请求时间(单位s)
request_time=30
#keep-alive
is_keep_alive=1
#force
is_force=0
#命令⾏选项
options="-c $process_num -t $request_time $url"
if [ $is_force -eq 1 ]
then
 options="-f $options"
fi
if [ $is_keep_alive -eq 1 ]
then
 options="-k $options"
fi
#删除之前开的进程
# kill -9 `ps -ef | grep webbench | awk '{print $2}'`
#运⾏
$webbench $options