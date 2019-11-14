#lang racket

(define x 
  (string->number 
    (read-line (current-input-port) 'any)
  )
)
(define n 
  (inexact->exact 
    (ceiling 
      (/ 
        (- x (* (/ (log 2) 512) 256))
        (log 2)
      )
    )
  )
)
(define r 
  (/ 
    (- x (* n (log 2))) 
    256
  )
)
(define serie 
  (+ 1 (* r (+ 1 (* r (+ 0.5 (* r (+ (/ 1 6)(* r (/ 1 24)))))))))
)
(* 
  (expt 
    (expt 
      (expt 
        (expt 
          (expt 
            (expt 
              (expt 
                (expt serie 2) 
                2
              ) 
              2
            ) 
            2
          ) 
          2
        ) 
        2
      ) 
      2
    ) 
    2
  ) 
  (arithmetic-shift 1 n)
)