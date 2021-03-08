find  . \( -name '*~' -or -name '*.pyc' -or -name '__pycache__' -or -name '.~lock.*.csv#' -or -name 'a.out' \) -delete -print

git add .
git commit -am "date: `date` "
git push origin main
