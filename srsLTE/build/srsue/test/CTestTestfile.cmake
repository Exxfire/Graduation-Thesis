# CMake generated Testfile for 
# Source directory: /home/wantong/Graduation-Thesis/srsLTE/srsue/test
# Build directory: /home/wantong/Graduation-Thesis/srsLTE/build/srsue/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(metrics_test "metrics_test" "-o" "/home/wantong/Graduation-Thesis/srsLTE/build/srsue/test/ue_metrics.csv")
subdirs(phy)
subdirs(mac)
subdirs(upper)
