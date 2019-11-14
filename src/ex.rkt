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
  (+ 1 (* r (+ 1 (* r (+ 0.5 (* r (+ 0.16666666666666666 (* r 0.041666666666666664))))))))
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