// 11��-7.HIERAR.CPP�� ù ��° �κ�  11.6 ���� class�� ���� ����
class RangeError {};
class MonthRange : public RangeError {};
class MonthTooBig : public MonthRange {};
class NegativeMonth : public MonthRange {};
class DayRange : public RangeError {};
class DayTooBig : public DayRange {};
class DayTooBigForMonth : public DayTooBig {};
class NegativeDay : public DayRange {};