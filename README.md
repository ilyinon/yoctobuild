
1. Install ansible  
 ( for example  apt-get install ansible -y ) 
2. Run playbook
 ansible-playbook  main.yml
 ansible-playbook main.yml  -i '127.0.0.1,'  ( for debian ) 
3. 
change user to yocto.
change target folder:
export TEMPLATECONF=meta-debian/conf; cd /u02 && source yocto/oe-init-build-env

run building:
bitbake core-image-minimal

4. Run VM
runqemu qemumips nographic bootparams="console=ttyAMA0"
( yocto user have to have sudo permission)

