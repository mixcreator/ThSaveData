#pragma once

#include <mutex>         // For std::unique_lock
#include <shared_mutex>


template <typename ValueType>
class ThSafeValue;

template <typename ValueType>
std::ostream& operator<< (std::ostream &out, const ThSafeValue<ValueType> &val)
{
    out << val.value;
    return out;
}


template <typename ValueType>
class ThSafeValue
{

public:
    ThSafeValue() = default;

    void set(const ValueType& val);
    ValueType get() const;
    
    friend std::ostream& operator<<<ValueType> (std::ostream &out, const ThSafeValue &val);
    
private:
    ValueType value;
    mutable std::shared_mutex mutex_;
};

void init();