select class from courses group by class having count(Distinct student)>=5;
