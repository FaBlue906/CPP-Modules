template< typename T >
Array<T>::Array() : _arr( new T[0] ), _length(0)
{

}

template< typename T >
Array<T>::Array(unsigned int n) : _arr(new T[n]), _length(n) {

	for (unsigned int i = 0; i < size(); i++) {

		this->_arr[i] = T();
	}
}

template< typename T >
Array<T>::~Array() {

	delete[] this->_arr;
}

template< typename T >
Array<T>::Array(Array const &ref_arr) {

	_arr = NULL;
	*this = ref_arr;
}

template< typename T >
Array<T>	&Array<T>::operator=(const Array<T> &ref_arr) {

	if (this != &ref_arr) {

		delete [] _arr;
		this->_arr = new T[ref_arr.size()];
		this->_length = ref_arr.size();

		for (unsigned int i = 0; i < ref_arr.size(); i++) {

			this->_arr[i] = ref_arr._arr[i];
		}
	}

	return (*this);
}

template< typename T >
unsigned int	Array<T>::size() const{

	return (this->_length);
}

template< typename T >
T	&Array<T>::operator[](int n) {

	if (n < 0 || n == static_cast<int>(this->size()))
		throw (OutOfBounds());
	return (this->_arr[n]);
}

template< typename T >
const T	&Array<T>::operator[](int n) const{

	if (n < 0 || n == static_cast<int>(this->size()))
		throw (OutOfBounds());
	return (this->_arr[n]);
}