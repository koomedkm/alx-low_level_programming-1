#1/bin/bash
betty $1 && git add $1 && git commit -m "$2" && git push origin master
