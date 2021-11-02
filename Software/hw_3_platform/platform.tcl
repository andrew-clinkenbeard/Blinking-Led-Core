# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\Users\andrew_clinkenbeard1\workspace\hw_3_platform\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\Users\andrew_clinkenbeard1\workspace\hw_3_platform\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {hw_3_platform}\
-hw {C:\Users\andrew_clinkenbeard1\Box\SOC\Basic_FPro2\hw_3_xsa.xsa}\
-proc {microblaze_I} -os {standalone} -out {C:/Users/andrew_clinkenbeard1/workspace}

platform write
platform generate -domains 
platform active {hw_3_platform}
platform generate
platform generate
