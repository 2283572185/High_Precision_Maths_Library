#include "Operand_Stream_Base.h"

High_Precision_Maths_Library::Precision_Base::Precision_Base(unsigned long long precision, int type)
{
	this->precision = precision;
	this->type = type;
	return;
}

High_Precision_Maths_Library::OperandStream_Base::OperandStream_Base()
{
	this->state = empty;
}

High_Precision_Maths_Library::OperandStream_Base::OperandStream_Base(const OperandStream_Base& value)
{
	this->data.copy((DDM<Operand_Base>&)value.data);
	this->state = value.state;
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(int value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(short value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(long value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(long long value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(unsigned int value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(unsigned short value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(unsigned long value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(unsigned long long value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(char value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(string value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(char* value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(Operand_Base& value)
{
	if (this->state == empty) {
		this->data.push_back(value);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(float value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(double value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::operator<<(long double value)
{
	if (this->state == empty) {
		Operand_Base o(value);
		this->data.push_back(o);
		this->state = fill;
	}
	else
	{
		Over_Flow e("流是满的，不能输入数据。");
		throw(e);
	}
	return;
}

__forceinline int High_Precision_Maths_Library::OperandStream_Base::operator>>(int value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline short High_Precision_Maths_Library::OperandStream_Base::operator>>(short value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline long High_Precision_Maths_Library::OperandStream_Base::operator>>(long value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline long long High_Precision_Maths_Library::OperandStream_Base::operator>>(long long value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline unsigned int High_Precision_Maths_Library::OperandStream_Base::operator>>(unsigned int value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline unsigned short High_Precision_Maths_Library::OperandStream_Base::operator>>(unsigned short value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline unsigned long High_Precision_Maths_Library::OperandStream_Base::operator>>(unsigned long value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline unsigned long long High_Precision_Maths_Library::OperandStream_Base::operator>>(unsigned long long value)
{
	if (this->state == fill) {
		this->change_precision((Operand_Base&)this->data.top(), (Precision_Base&)Precision_Base(0, round));
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline char High_Precision_Maths_Library::OperandStream_Base::operator>>(char value)
{
	if (this->state == fill) {
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline string High_Precision_Maths_Library::OperandStream_Base::operator>>(string& value)
{
	if (this->state == fill) {
		value = this->data.top().to_string();
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline char* High_Precision_Maths_Library::OperandStream_Base::operator>>(char* value)
{
	if (this->state == fill) {
		string s = this->data.top().to_string();
		unsigned long long lenght = s.length();
		value = new char[lenght];
		for (unsigned long long ll = 0; ll < lenght; ll++) {
			value[ll] = s[ll];
		}
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline Operand_Base High_Precision_Maths_Library::OperandStream_Base::operator>>(Operand_Base& value)
{
	if (this->state == fill) {
		value = this->data.top();
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline float High_Precision_Maths_Library::OperandStream_Base::operator>>(float value)
{
	if (this->state == fill) {
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline double High_Precision_Maths_Library::OperandStream_Base::operator>>(double value)
{
	if (this->state == fill) {
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline long double High_Precision_Maths_Library::OperandStream_Base::operator>>(long double value)
{
	if (this->state == fill) {
		stringstream ss;
		ss << this->data.top().to_string();
		ss >> value;
		this->state = empty;
	}
	else
	{
		Under_Flow e("流是空的，不能输出数据。");
		throw(e);
	}
	return value;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::clear()
{
	this->data.clear();
	this->state = empty;
	return;
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::free()
{
	this->state = empty;
	return;
}

__forceinline bool High_Precision_Maths_Library::OperandStream_Base::is_empty()
{
	if (this->state == empty) {
		return true;
	}
	else
	{
		return false;
	}
}

__forceinline bool High_Precision_Maths_Library::OperandStream_Base::is_fill()
{
	if (this->state == fill) {
		return true;
	}
	else
	{
		return false;
	}
}

__forceinline void High_Precision_Maths_Library::OperandStream_Base::change_precision(Operand_Base& value, Precision_Base& precision)
{
	char _0 = '0';
	char _1 = '1';
	//需要舍去小数点则舍去，不需要则跳过
	if ((value.data.size() - 1 - value.point > precision.precision) &&
		(precision.type != (round | strict) && precision.type != (round_down | strict) && precision.type != (round_up | strict))) {
		//四舍五入
		if (precision.type == round || precision.type == (round | strict)) {
			//将v移到要保留的位数的下一位（指向最低位）
			Value<char>* v = value.data.address(value.point + precision.precision + 1);
			//删除保留的位数的下一位之后的数据
			while (true)
			{
				//当保留的位数的下一位成为对象中的最后一个元素时，退出
				if (value.data.end() == v) {
					break;
				}
				else
				{
					//弹出最后一个元素
					value.data.pop();
				}
			}
			//五入
			if (*v->value > '4') {
				Result result;
				result.change = '1';
				//指向对象中的第一个元素的指针（指向最高位）
				Value<char>* top = value.data.begin();
				//将v移到要保留的位数
				v = v->last;
				//从最低位开始向高位做加法
				while (true)
				{
					//当低位和高位的指针重合时，加法完成
					if (v == top) {
						high_precision_addition(*v->value, _0, result);
						*v->value = result.result;
						break;
					}
					high_precision_addition(*v->value, _0, result);
					*v->value = result.result;
					v = v->last;
				}
				//有进位，向前插入进位
				if (result.change == '1') {
					value.data.insert(top, _1);
				}
				//弹出保留的位数的下一位
				value.data.pop();
				//若保留整数，弹出小数点
				if (precision.precision == 0) {
					value.data.pop();
					value.point = value.data.size();
				}
			}
			//四舍
			else
			{
				value.data.pop();
				//若保留整数，弹出小数点
				if (precision.precision == 0) {
					value.data.pop();
					value.point = value.data.size();
				}
			}
		}
		//去尾
		else if (precision.type == round_down || precision.type == (round_down | strict)) {
			// 将v移到要保留的位数
			Value<char>* v = value.data.address(value.point + precision.precision);
			//删除保留的位数之后的数据
			while (true)
			{
				//当保留的位数成为对象中的最后一个元素时，退出
				if (value.data.end() == v) {
					break;
				}
				else
				{
					//弹出最后一个元素
					value.data.pop();
				}
			}
			//若保留整数，弹出小数点
			if (precision.precision == 0) {
				value.data.pop();
				value.point = value.data.size();
			}
		}
		//进一
		else if (precision.type == round_up || precision.type == (round_up | strict)) {
			// 将v移到要保留的位数
			Value<char>* v = value.data.address(value.point + precision.precision);
			//删除保留的位数之后的数据
			while (true)
			{
				//当保留的位数成为对象中的最后一个元素时，退出
				if (value.data.end() == v) {
					break;
				}
				else
				{
					//弹出最后一个元素
					value.data.pop();
				}
			}
			Result result;
			result.change = '1';
			//指向对象中的第一个元素的指针（指向最高位）
			Value<char>* top = value.data.begin();
			//从最低位开始向高位做加法
			while (true)
			{
				//当低位和高位的指针重合时，加法完成
				if (v == top) {
					high_precision_addition(*v->value, _0, result);
					*v->value = result.result;
					break;
				}
				high_precision_addition(*v->value, _0, result);
				*v->value = result.result;
				v = v->last;
			}
			//有进位，向前插入进位
			if (result.change == '1') {
				value.data.insert(top, _1);
			}
			//若保留整数，弹出小数点
			if (precision.precision == 0) {
				value.data.pop();
				value.point = value.data.size();
			}
		}
		//都不是则报错
		else
		{
			Illegal_Data e("输入的转换类型不合法。，请在宏中进行选择。");
			throw(e);
		}
	}
	//若是严格模式，判断是否需要补0
	if (precision.type == (round | strict) || precision.type == (round_down | strict) || precision.type == (round_up | strict)) {
		//保留整数直接退出
		if (precision.precision == 0) {
			return;
		}
		//现有小数的位数
		unsigned long long decimal_digits = value.data.size() - 1 - value.point;
		//还需要补充的小数位数
		unsigned long long need = precision.precision - decimal_digits;
		for (unsigned long long i = 0; i < need; i++)
		{
			//补0
			value.data.push_back(_0);
		}
		return;
	}
	return;
}